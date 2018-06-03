#include "functions2.h"

long int a,b;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long int zz,num,edges,i,j;
        scanf("%ld",&num);
        scanf("%ld",&edges);
        long int array[num+1],numberr=0;
        int x;
        for (i = 0; i < num; ++i){
            array[i]=i;
        }

        for (i = 0; i < edges; ++i){
            scanf("%ld %ld",&a,&b);
            x=0;
            if(a>b){
                swap(a,b);
            }
            while(x==0){

                if(array[a]==a){
                    array[a]=array[b];
                    x=1;
                }
                else{
                    zz = array[a];
                    array[a]= array[b];
                    a = zz;
                }
            };
        }
        for (i = 0; i < num; ++i){
            if(array[i]==i)
            {
                numberr++;
            }
        }
        printf("%ld\n",numberr);
    }

    return 0;
}
