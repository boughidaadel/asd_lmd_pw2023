#include <stdio.h>
#include <stdlib.h>
int main()
{
#define l 11
#define c 4
int T[c][l];
int i, j;
int max_goals = 0;
int team=0, player=0;
printf("enter goals of each player: ");
for(i=0;i<c;i++) {
    for(j=0;j<l;j++) {
        scanf("%d", &T[i][j]);
        if(T[i][j] > max_goals) {
            max_goals = T[i][j];
            player=j;
            team=i;
        }
}

}
printf("max goals is= %d \n", max_goals);
printf("Player number= %d \n", player);
printf("Team number= %d \n", team);

return 0;
}
