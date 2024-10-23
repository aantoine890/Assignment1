#!/bin/bash
#SBATCH --job-name=hello_world 
#SBATCH --output=output.txt 
#SBATCH --error=error.txt
#SBATCH --time=00:01:00             
#SBATCH --ntasks=1                   
#SBATCH --mem=100M             

./exe-GCC Antoine      

