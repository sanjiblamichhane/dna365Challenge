# Author: Sanjib Lamichhane
# Problem Statement: Travelling Salesman

import six
import sys
sys.modules['sklearn.externals.six'] = six
import mlrose 
import numpy as np

# 1. Define a Fitness Function Object.

#Create list of city coordinates:
coords_list = [(1,1), (4,2), (5,2), (6,4), (4,4), (3,6), (1,5),(2,3)]

# Initialize fitness function object using coords_list
fitness_coords = mlrose.TravellingSales(coords = coords_list)

# Alternative way ( saved for later)

# 2. Define an Optimization Problem Object
    
problem_fit = mlrose. TSPOpt(length = 8, fitness_fn = fitness_coords, maximize = False)


# 3. Select and Run a Randomized Optimization Algorithm

best_state, best_fitness = mlrose.genetic_alg(problem_fit, random_state = 2)

print("The best state found is: ", best_state)

print("The fitness at the best state is: ", best_fitness)

# Solve problem using genetic algorithm

best_state, best_fitness = mlrose.genetic_alg(problem_fit, mutation_prob = 0.2, max_attempts = 100, random_state = 2)

print("The best state found is: ", best_state)

print("The fitness at the best state is: ", best_fitness)
