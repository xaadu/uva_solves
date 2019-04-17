/* UVA --> 10189 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,c=1;
    cin >> x >> y;
    while(x!=0||y!=0)
    {
        char ar[x+2][y+2], ar2[x+2][y+2];
        for(int i=1; i<x+1; i++)
            for(int j=1; j<y+1; j++)
                cin >> ar[i][j];
        for(int i=1; i<x+1; i++)
            for(int j=1; j<y+1; j++)
                ar2[i][j]='0';
        for(int i=1; i<x+1; i++)
            for(int j=1; j<y+1; j++)
                if(ar[i][j]=='*')
                {
                    (ar[i-1][j-1]!='*')?ar2[i-1][j-1]++:ar2[i-1][j-1]='*';
                    (ar[i-1][j]!='*')?ar2[i-1][j]++:ar2[i-1][j]='*';
                    (ar[i-1][j+1]!='*')?ar2[i-1][j+1]++:ar2[i-1][j+1]='*';
                    (ar[i][j-1]!='*')?ar2[i][j-1]++:ar2[i][j-1]='*';
                    (ar[i][j+1]!='*')?ar2[i][j+1]++:ar2[i][j+1]='*';
                    (ar[i+1][j-1]!='*')?ar2[i+1][j-1]++:ar2[i+1][j-1]='*';
                    (ar[i+1][j]!='*')?ar2[i+1][j]++:ar2[i+1][j]='*';
                    (ar[i+1][j+1]!='*')?ar2[i+1][j+1]++:ar2[i+1][j+1]='*';
                    ar2[i][j]='*';
                }
        cout << "Field #" << c << ":" <<endl;
        for(int i=1; i<x+1; i++)
        {
            for(int j=1; j<y+1; j++)
                cout << ar2[i][j];
            cout << endl;
        }
        cin >> x >> y;
        if(x!=0||y!=0)
        {
            c++;
            cout << endl;
        }
        else
                break;
    }
    return 0;
}



    /*int main(){
        int x,y;

        cin >> x >> y;
        char ar[x][y];
        int ar2[x][y];
        for(i=0; i<x; i++)
            for(j=0; j<y; j++)
                cin >> ar[i][j];
        for(i=0; i<x; i++)
            for(j=0; j<y; j++)
                ar[i][j]=0;
        for(i=0; i<x; i++){
            for(j=0; j<y; j++){
                    if(i-1>=0){
                            if(j-1>=0){
                                ar2[i-1][j-1]++;
                                ar2[i-1][j]++;
                                ar2[i][j-1]++;
                            }
                            if(j+1<y){
                                ar2[i-1][j+1]++;
                                ar2[i-1][j]++;
                                ar2[i][j+1]++;
                            }
                    }
                    if(i+1<x){

                    }
            }

        }

        return 0;
    }
    */
