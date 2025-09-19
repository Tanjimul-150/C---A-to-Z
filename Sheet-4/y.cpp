#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
using namespace std;
int main()
{
    string str;
    int cost[26];
    cin >> str;
    for (int i = 0; i < 26; i++)
    {
        cin >> cost[i];
    }
    int question_counter = 0;

    for (int i = 0; i < str.size(); i++)
    {
        question_counter = 0;
        if (str[i] == '?')
        {

            for (int j = i; j < str.size(); j++)
            {
                if (str[j] == '?')
                {
                    question_counter++;
                }
                else
                {
                    break;
                }
            }

            if (question_counter == str.size())
            {
                cout << 0 << endl;
                for (int j = 0; j < str.size(); j++)
                {
                    cout << "a";
                }

                return 0;
            }
            else
            {

                if (i == 0)
                {
                    int min = INT_MAX, index;

                    for (int z = 0; z < (str[question_counter] - 97) + 1; z++)
                    {
                        int current_cost = abs(cost[str[question_counter] - 97] - cost[z]);
                        if (min > current_cost)
                        {
                            min = current_cost;
                            index = z;
                        }
                    }

                    char replacement_char = index + 97;
                    for (int j = 0; j < question_counter; j++)
                    {
                        str[j] = replacement_char;
                    }

                    i += question_counter;
                }

                else if (i + question_counter == str.size())
                {
                    int min = INT_MAX, index;

                    for (int z = 0; z < (str[i - 1] - 97) + 1; z++)
                    {
                        int current_cost = abs(cost[str[i - 1] - 97] - cost[z]);
                        if (min > current_cost)
                        {
                            min = current_cost;
                            index = z;
                        }
                    }

                    char replacement_char = index + 97;

                    for (int j = i; j < question_counter + i; j++)
                    {
                        str[j] = replacement_char;
                    }

                    break;
                }

                else
                {
                    int min = INT_MAX, index;

                    for (int x = 0; x < 26; x++)
                    {
                        int current_cost = abs(cost[str[i - 1] - 97] - cost[x]) + abs(cost[x] - cost[str[i + question_counter] - 97]);
                        if (min > current_cost)
                        {
                            min = current_cost;
                            index = x;
                        }
                    }

                    char replacement_char = index + 97;

                    for (int j = i; j < i + question_counter; j++)
                    {
                        str[j] = replacement_char;
                    }

                    i += question_counter;
                }
            }
        }
    }

    long long final_cost = 0;
    for (int i = 0; i < str.size() - 1; i++)
    {
        final_cost += abs(cost[str[i] - 97] - cost[str[i + 1] - 97]);
    }

    cout << final_cost << endl;
    cout << str << endl;
    return 0;
}