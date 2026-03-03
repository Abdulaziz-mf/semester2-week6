#include <stdio.h>
#include <stdlib.h>


int fine(int speed,int limit){
  int fine2;
  if (speed > limit) {
    int excess_speed = speed - limit;

    // Calculate fine based on how much over the limit
    if (excess_speed <= 10) {
      return 50;
    } else if (excess_speed <= 20) {
      return 100;
    } else {
      return 200;
    }
}
}

int main() {
  int speed_limit, driver_speed;
  char input[20];

  // Get user input for speed limit
  printf("Enter the speed limit: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &speed_limit);
  }

  // Get user input for driver's speed
  printf("Enter the driver's speed: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &driver_speed);
  }
  int fine2 = fine(driver_speed,speed_limit);
  if (driver_speed > speed_limit) {
    printf("Fine: %d\n",fine2);
  }
  else{
    printf("No fine\n");
    }
  

  return 0;
}