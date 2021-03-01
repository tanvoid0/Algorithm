#include "cstdio"
#define MAX 1001
int t;
int clouds[MAX];

int min_clouds(int i) {

  if(i >= t-1){

    return 0;
  }
  if(i == 0 && clouds[0] == 1){

    return min_clouds(1);
  }
  if(clouds[i+2] == 0){

    return min_clouds(i+2)+1;
  }

  return min_clouds(i+1)+1;
}

int main() {
	freopen("JumpingTheClouds.txt", "r", stdin);
  	
	scanf("%d", &t);
   	for(int l=0; l<t; l++){
   		scanf("%d", &clouds[l]);
	}
	int min_path = min_clouds(0);


    printf("%d\n", min_path);
  	return 0;
}