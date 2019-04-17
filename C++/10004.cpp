/* UVA --> 10004 */

#include <bits/stdc++.h>
using namespace std;

struct st{
    int v,c=0;
};

int main()
{
    int v,e,x,y, i, c=1;

    cin>>v>>e;

    struct st z[v];
    for(i=0; i<v; i++)
        z[i].v=0;

    for(i=0; i<e; i++){
        cin >> x >> y;
        for(j=0; j<v;j++){
            if(z[j].v==x){
                if(z[j].c==0)
                    z[j].c=col;
            }
        }
    }




    /*int i, j, v, e, x, y;
    cin >> v;
    int vs[v][v];
    for(i=0; i<v; i++)
        for(j=0; j<v; j++)
            vs[i][j] = -1;
    for(i=0; i<v; i++)
        vs[i][0] = i;
    for(i=0; i<v; i++)
    {
        for(j=0; j<v; j++)
            cout << vs[i][j] << " ";
        cout << endl;
    }
    cout << endl << endl;
    cin >> e;
    int vsc[v];
    for(i=0; i<v; i++)
        vsc[i]=1;
    for(i=0; i<e; i++)
    {
        cin >> x >> y;
        for(j=0; j<v; j++)
        {
            if(vs[j][0]==x)
            {
                vs[j][vsc[j]] = y;
                vsc[j]++;
                break;
            }
        }
        for(j=0; j<v; j++)
        {
            if(vs[j][0]==y)
            {
                vs[j][vsc[j]] = x;
                vsc[j]++;
                break;
            }
        }
    }
    for(i=0; i<v; i++)
    {
        for(j=0; j<v; j++)
            cout << vs[i][j] << " ";
        cout << endl;
    }
    cout << endl << endl;
    //----------------------------

    int vs1[v], vs2[v];
    for(i=0; i<v; i++)
        vs1[i]=vs2[i]=-1;
    for(i=0; i<v; i++){
        vs[i][0];
        bool check = false;
        for(j=1; j<v; j++)
            if()
    }
    */
    return 0;
}
