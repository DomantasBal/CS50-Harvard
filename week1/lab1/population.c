// #include <stdio.h>
// #include <cs50.h>

// int main(void)
// {
//     // initializing variables to store some stuff
//     int starting_lamas;
//     int ending_lamas;
//     int lama_born;
//     int lama_die;
//     int population;
//     int years = 0;

//     // if user inputs less than 9 aks user again for input
//     do
//     {
//         starting_lamas = get_int("Enter starting number ");
//     } while (starting_lamas < 9);

//     // if user inputs less or equal to starting number ask again for input
//     do
//     {
//         ending_lamas = get_int("Enter ending lamas ");
//     } while (ending_lamas <= starting_lamas);

//     // setting population of lamas at first
//     population = starting_lamas;

//     // loop goes through population checking over and over
//     // if it is more than ending_lamas if it is over that number
//     // it jumps out of the loop and prints the years count
//     // years ++ jus adds the years count how many times until the population outgrows ending number

//     while (population < ending_lamas)
//     {
//         lama_die = population / 4;
//         lama_born = population / 3;

//         population = population + lama_born - lama_die;
//         years++;
//     }

//     printf("The years number is: %i \n", years);

//     return 0;
// }
