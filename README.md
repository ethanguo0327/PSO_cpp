<<<<<<< HEAD

copy from here:https://github.com/lava/matplotlib-cpp, and here:https://github.com/duaraghav8/SwarmOpt.
just a combination of this two.

(Fine, I'll admit. The Project Structure is pretty messed up! We made it in a bit of a rush - we believe the later we deploy, the older we are, the wiser we are. Will fix this soon:) )


**SwarmOpt** is a ***Particle Swarm Optimization*** Library for optimizing continuous single-objective functions. The library currently features 5 in-built objective functions and requires C++11 or above. Though PSO can also be used for Discrete Optimization Problems (like classification), the current version of the library doesn't support it.  
Note: Because of the Database connectivity feature, the library currently supports only Linux & Unix based Operating Systems.

**Team:**

	Raghav Dua
	(Special thanks to Mridhul Bhambri for the Database Construction Script & User Doc and Nishchal Dua for Objective Function Implementations)
	I have also taken inspiration from kkentzo's C-based PSO library (https://github.com/kkentzo/pso) and am grateful to him for clearing my doubts


**Mentors:**

	Dr. Rashmi Sharma (Department of Computer Science, UPES Dehradun)

	Mr. Gunjan Chhabra (Department of Computer Science, UPES Dehradun)


**Features:**


1. Scope of Social Influence:

	->Global Best - The best social factor depends upon the entire swarm.

	->Local Best - The best social factor depends upon K Nearest Neighbours of the particle (K (int) supplied by the user). The nearest Neighbours are selected using the Euclidean Distance Heuristic.


2. Inertia Weight:

	->Constant - Remains constant W throughout the process (W (double) supplied by the user) (default 0.6359)

	->Linearly Decreasing - Starts with an Inertia Weight of W1 and decreases toward W2 (W1 (double) & W2 (double) supplied by the user, W1 > W2)


3. Halting Conditions:

	(Can be used individually as well as in combination with each-other)

	->DEFAULT: Fitness Error < Specified Error (The user specifies an error (double) and when the fittest particle demonstrates an error smaller than that, process stops).

	->Limit on Iterations: The Process stops after I iterations (I (int) supplied by the user)

	->No Significant Change: Process stops if no significant change is observed over S number of Iterations (S (int) supplied by the user)


4. Swarm Size:

	A Maximum of 100 particles can be used (however, a size of 20 to 30 is recommend for most problems). The default swarm size is (10 + (2 * sqrt (dim)), sqrt means Square Root, dim is the number of dimensions in each particle) particles.

	Custom Swarm Size: Swarm Size is set to S (S (int) supplied by the user. S <= 100)


5. Cognitive & Social Coefficients:

	The coefficients C1 & C2: default value C1 = C2 = 1.496

	Custom: C1 & C2 can be set to A & B (A (double), B (double) supplied by user)


6. Verbose Information:

	Return the state of the swarm after each iteration (for each iteration, a vector of vectors of double is produced). This is the 'snapshot' of the swarm after that iteration

	default value: 0 (means verbose information output is OFF)

	supply the function with any int other than 0 - Verbose ON

	Prints Verbose Information to Standard Output.


7. Output format:

	->Optimal Solution - A Value for each Dimension

	->Error for the acquired value

	->Number of Iterations used to achieve the solution

	->Time taken

	->The choice of Parameters


8. Output Storage:

	The Library provides Database connectivity with MySql to store the problem configuration, parameters, progress under each iteration, solution retrieved and time taken.


9. Objective Functions:

	The Library Currently Features 5 Objective Functions (more will be added):

		->Sphere Function

		->Rosenbrock

		->Griewank

		->Styblinski-Tang

		->Rastrigin

	Apart from these, the user may supply an objective function of their own, which will be minimized.
=======
# PSO_cpp
PSO algorithm by cpp,test function:rosenbrock,griewank,sphere,rastrigin.
>>>>>>> origin/master
