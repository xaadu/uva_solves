/* URI --> 11498 */

#include <stdio.h>

int main(){

    int x,y,a,b,c,d,e,f,t;

    for(scanf("%d",&t);t!=0;scanf("%d",&t)){

        scanf("%d %d",&x,&y);
        while(t!=0){
          scanf("%d %d",&a,&b);
          if(x==a||y==b)
              printf("divisa\n");
          else if(a>x)
              if(b>y)
                  printf("NE\n");
              else
                  printf("SE\n");
          else
              if(b>y)
                  printf("NO\n");
              else
                  printf("SO\n");
          t--;

        }

  }
  return 0;
}
