//Test 1
//obj_func.hpp and pso.hpp must reside in the same directory as the source file (in this case, test_1.cpp)
#include <iostream>
#include <algorithm>
#include "obj_func.hpp"
#include "pso.hpp"
using namespace std;

void print (double& val) { cout << val << "\t\t"<<endl; }
int main () {
	//Swarm mySwarm (5, pso_sphere);
	// Swarm mySwarm (6, pso_griewank);
//	Swarm mySwarm (6, pso_rastrigin);
	Swarm mySwarm (30, pso_rosenbrock);

	vector< double > best;

	mySwarm.set_strategy_social (pso::STRATEGY_GLOBAL);
	mySwarm.set_strategy_halt (true, true, false);
	mySwarm.set_strategy_weight (pso::STRATEGY_W_LIN_DEC);

	mySwarm.set_iterations (3000);
	mySwarm.set_err_thresh (1e-4);

	mySwarm.set_iw_bounds (0.3, 0.9);

	mySwarm.set_swarm_size (10);
	//mySwarm.set_dim_bounds (-9e6, 9e6);
    mySwarm.set_dim_bounds (-30, 30);

	best = mySwarm.find_food ();
	for_each (best.begin (), best.end (), print);
	
	cout << endl << "Error: " << pso_rosenbrock (best, nullptr) << endl;
	cout << endl;
	return (0);
}
