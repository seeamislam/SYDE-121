/* Student Name: Seeam Islam
Student Number: 20772998
Date: September 26 2018
Course: SYDE 121
Room: WEEF Lab
Assignment: Lab03
Exercise: 02
File Name: lab03_02.cpp
Project: Control Flow Constructs, Basic Problem Solving

I hereby declare that this code, submitted for credit for the course
SYDE121, is a product of my own efforts.  This coded solution has
not been plagiarized from other sources and has not been knowingly plagiarized by others. */

/* To test the range of values, we tried using a distance of 0, implying that the ball was already on the ground. 
The returned value was 0s, which is true. We also tried -1, however negative integers simply computed that the ball was
had hit the ground right away, which is incorrect. Therefore, negative integers do not work.

Output for B: Can be found at the bottom of the code.

 */

#include <iostream>

using namespace std;

int main() {

const double GRAVITY = 9.80665; // set constant values
double distance = 0;
double time;
const int HEIGHT = 15000; // this is where you input the height of the drop (insert test values here)
double total_distance = 0; // this was used for the first question


cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(3); // set precision to 3 decimals

for (distance = 0; distance <= HEIGHT; time += 1)
{
    distance = (0.5)*(GRAVITY)*(time*time);
// total_distance = total_distance + distance (used for the first question);

    if (distance < 1000) 
        {
            cout << distance << "\t\t\t\t\t\t\t" << time << endl;
        }

    else if (distance > 1000) 
    {
        cout << distance << "\t\t\t\t\t\t\t" << time << endl;

        if (distance >= 14000) // determines when the ball is 1000m from the ground
        {
            cout << "The ball is getting very close to the ground" << endl;

            for(distance = 0; distance <= 15000; time += 0.1) // time interval changes to 0.1
            {
                distance = (0.5) * GRAVITY * (time) * (time);
                if (distance < 15000)
                {
                    cout << distance << "\t\t\t\t\t\t\t" << time << endl;
                }
        }

    } 
}

} // for loop

cout << "The ball has reached the ground" << endl;

return 0;
}


/*Output for 15,000

0.000                                                   0.000
4.903                                                   1.000
19.613                                                  2.000
44.130                                                  3.000
78.453                                                  4.000
122.583                                                 5.000
176.520                                                 6.000
240.263                                                 7.000
313.813                                                 8.000
397.169                                                 9.000
490.332                                                 10.000
593.302                                                 11.000
706.079                                                 12.000
828.662                                                 13.000
961.052                                                 14.000
1103.248                                                        15.000
1255.251                                                        16.000
1417.061                                                        17.000
1588.677                                                        18.000
1770.100                                                        19.000
1961.330                                                        20.000
2162.366                                                        21.000
2373.209                                                        22.000
2593.859                                                        23.000
2824.315                                                        24.000
3064.578                                                        25.000
3314.648                                                        26.000
3574.524                                                        27.000
3844.207                                                        28.000
4123.696                                                        29.000
4412.992                                                        30.000
4712.095                                                        31.000
5021.005                                                        32.000
5339.721                                                        33.000
5668.244                                                        34.000
6006.573                                                        35.000
6354.709                                                        36.000
6712.652                                                        37.000
7080.401                                                        38.000
7457.957                                                        39.000
7845.320                                                        40.000
8242.489                                                        41.000
8649.465                                                        42.000
9066.248                                                        43.000
9492.837                                                        44.000
9929.233                                                        45.000
10375.436                                                       46.000
10831.445                                                       47.000
11297.261                                                       48.000
11772.883                                                       49.000
12258.312                                                       50.000
12753.548                                                       51.000
13258.591                                                       52.000
13773.440                                                       53.000
14298.096                                                       54.000
The ball is getting very close to the ground
14298.096                                                       54.000
14351.101                                                       54.100
14404.204                                                       54.200
14457.405                                                       54.300
14510.704                                                       54.400
14564.101                                                       54.500
14617.596                                                       54.600
14671.190                                                       54.700
14724.881                                                       54.800
14778.671                                                       54.900
14832.558                                                       55.000
14886.544                                                       55.100
14940.627                                                       55.200
14994.809                                                        55.300
The ball has reached the ground */