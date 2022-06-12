#include <vector>
#include "Vector2D.h"
#include "Vehicle.h"
#include "Obstacle.h"
using namespace std;
class SteeringBehavior {
public:
	SteeringBehavior() {}
	Vector2D Hide(const Vehicle* hunter,
		const vector<Obstacle*>& obstacles) {}

};
