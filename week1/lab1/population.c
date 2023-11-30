// #include <stdio.h>
// #include <cs50.h>

// int main(void)
// {
//     int starting_lamas = 0;
//     int ending_lamas = 0;
//     int lama_born;
//     int lama_die;
//     int population;

//     int years;

//     do
//     {
//         starting_lamas = get_int("Enter starting number ");
//     } while (starting_lamas < 9);

//     if (starting_lamas >= 9)
//     {
//         do
//         {
//             ending_lamas = get_int("Enter ending lamas ");
//         } while (ending_lamas <= starting_lamas);
//     }

//     lama_die = starting_lamas / 4;
//     lama_born = starting_lamas / 3;

//     population = starting_lamas + lama_born - lama_die;

//     years = ending_lamas / population;

//     printf("The years number is: %i \n", years);

//     return 0;
// }
