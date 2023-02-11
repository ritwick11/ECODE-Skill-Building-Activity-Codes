#include <time.h>
#include <stdio.h>
#define MAX_SIZE 10

enum Status {Closed = 1, Open = 2};
enum GearStatus {Parking = 1, Other = 2};
enum NewsType {WorldNews = 100, CityNews = 200, EconomicNews = 300, SportsNews = 400};
enum MusicType {LightClassical = 100, OldHindi = 200, Ghazal = 300, Rock = 400};
enum CarStart {Safe = 100, Unsafe = 200};
enum OnOffStatus {Off = 100, On = 200};

typedef unsigned int UINT;

struct CarPropertiesStatus
{
	enum Status LeftFrontDoor;
	enum Status RightFrontDoor;
	enum Status LeftRearDoor;
	enum Status RightRearDoor;
	enum Status Boot;
	enum Status HandBrake;
	enum OnOffStatus Headlights;
	enum GearStatus Gear;
};

union NewsMusic 
{
	enum NewsType News;
	enum MusicType Music;
};

struct TimeMood
{
	unsigned char Hour;
	enum OnOffStatus HeadLight;
	union NewsMusic Nm;
};

// Function prototypes
enum CarStart CarSafeToStart(struct CarPropertiesStatus c);
void ShowCarProperties(struct CarPropertiesStatus c);
struct TimeMood SetTimeMood(UINT hour);
void ShowTimeMood(struct TimeMood t);

