#include "FeedTube.h"

//pins
#define digiPin53 53
#define digiPin51 51
#define digiPin49 49
#define digiPin47 47
#define digiPin45 45
#define digiPin43 43
#define digiPin41 41
#define digiPin39 39
#define digiPin37 37
#define digiPin35 35
#define digiPin33 33
#define digiPin31 31
/*not in use
#define digiPin29 29
#define digiPin27 27
#define digiPin25 25
#define digiPin23 23
*/

//steps to dispense food
#define TubeOneDispenseSteps 1000 //placeholder value
#define TubeTwoDispenseSteps 1000 //placeholder value
#define TubeThreeDispenseSteps 1000 //placeholder value

//initialize tubes
FeedTube TubeOne(digiPin53, digiPin51, digiPin49, digiPin47, TubeOneDispenseSteps);
FeedTube TubeTwo(digiPin45, digiPin43, digiPin41, digiPin39, TubeTwoDispenseSteps);
FeedTube TubeThree(digiPin37, digiPin35, digiPin33, digiPin31, TubeThreeDispenseSteps);

void setup()
{
  
}

void loop()
{

}