struct Job
{
    int time;
    int fine;
    int id;
};

bool comp(const Job &j1, const Job&j2)
{
    return j1.time * j2.fine < j2.time * j1.fine;
}




struct data
{
    double d,f,s,r;
    bool operator < (const data&p)const
    {
        if(r==p.r)
        {
            return s<p.s;
        }
        else
        {
            return r<p.r;
        }
    }
};
