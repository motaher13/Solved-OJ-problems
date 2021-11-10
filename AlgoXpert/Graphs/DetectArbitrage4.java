package AlgoExp.Graphs;

import java.util.ArrayList;
import java.util.Arrays;

public class DetectArbitrage4 {
    /*
	we are going to use bellman ford algo here. bellman ford finds a negative cycle
	in a graph. first it finds minimum distance from starting node to every node, than
	it runs another iteration, if the distance to any node decreases again, then there is a
	negative cycle

	as in this problem dataset every node is connected to every other node, we can
	reach the existing cycle doesn't matter which node we start from. so no need to start
	from every node

	in bellman ford, distance is calculated by summation. but in currency exchange we
	have to use multiplication for output currency. so we will use log to convert
	multiplication to summation.

	for following currency exchange rate

	x->y : a
	y->x : b

	if (a*b)>1, then there is an arbitrage. now:

	=>a*b > 1
	=>log(a*b) > log(1)
	=>log(a)+log(b) > 0
	=>(-log(a)) + (-log(b)) < 0 [multiplying both side with -1]

	we will make a duplicate graph, replace all edge values with -log(value),
	then run bellman ford, if after

	in bellman ford, the iteration will be nodeCount-1 times, cause, to reach from
  0 to 5, we need 4 steps, meaning nodeCount-1 steps will take us to the last node

	*/

    ArrayList<ArrayList<Double>> rates;
    double[][] logRates;
    int n;
    int start=0; // we are deciding to start from node '0'

    public boolean detectArbitrage(ArrayList<ArrayList<Double>> exchangeRates) {
        this.rates=exchangeRates;
        n=rates.size();
        logRates=new double[n][n];

        copyToLogRates();

        double[] dist=new double[n];
        Arrays.fill(dist, Double.MAX_VALUE);
        dist[start]=0; // setting distacne of start node to '0'

        // relax the edges for n-1 times, to get min dist from start to each node
        // relax means using the edge
        for(int count=0;count<n-1;count++){
            boolean updated = relaxAllEdges(dist);
            if(!updated) return false; // no update is done, meaning no more progress, so arbitrage isn't possible
        }

        boolean updated = relaxAllEdges(dist);
        return updated; // if updated, means there is cycle, meaning arbitrage
    }

    public boolean relaxAllEdges(double[] dist){
        boolean updated=false;
        // iterating for each edge
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                double newDistance=dist[i]+logRates[i][j];
                if(newDistance<dist[j]){
                    updated=true;
                    dist[j]=newDistance;
                }
            }
        }

        return updated;
    }

    public void copyToLogRates(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                logRates[i][j]= -1*(Math.log10(rates.get(i).get(j)));
            }
        }
    }


}
