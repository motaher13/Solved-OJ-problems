package LeetCode.Others;

import java.util.Arrays;

public class TaskScheduler {
    public int leastInterval(char[] tasks, int n) {
        // frequencies of the tasks
        int[] frequencies = new int[26];
        for (int t : tasks) {
            frequencies[t - 'A']++;
        }

        Arrays.sort(frequencies);

        // max frequency
        int f_max = frequencies[25];
        int idle_time = (f_max - 1) * n;

        for (int i = frequencies.length - 2; i > 0 && idle_time > 0; --i) {
            idle_time -= Math.min(f_max - 1, frequencies[i]);
        }
        idle_time = Math.max(0, idle_time);

        return idle_time + tasks.length;
    }


    public int practice(char[] tasks, int n) {
        int[] count=new int[26];
        for(char c:tasks) count[c-'A']++;
        Arrays.sort(count);

        int mxCount=count[25];
        int idleTime=(mxCount-1)*n;

        for(int i=24;i>=0 && idleTime>0;i--){
            idleTime-=Math.min(mxCount-1,count[i]);
        }
        idleTime=Math.max(0,idleTime);

        return idleTime+tasks.length;



    }

    public static void main(String[] args) {
        char[] a=new char[]{'A','A','A','A','A','A','B','C','D','E','F','G'};
        System.out.println((new TaskScheduler()).practice(a,2));
    }
}
