#include <stdio.h>
#include <stdlib.h>
int main()
{
#define l 11
#define c 4
int T[c][l];

int i, j;

int max = 0;
int team=0, player=0;
for(i=0; i<c;i++) { //parcours de lignes

    printf("Goals of each player in team %d: ",i);
    for(j=0;j<l;j++) {//parcours de colonnes

        scanf("%d",&T[i][j]);
        if(T[i][j]>max) {
            max = T[i][j];
            team = i;
            player = j;
        }
    }

}

printf("The max goals scored by a player is %d \n", max);
printf("The number of player is: %d \n", player);
printf("The number of team is: %d \n", team);


return 0;
}
