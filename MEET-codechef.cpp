#include<iostream>
using namespace std;
int main()
{
    int p[2];
    char ch;
    string p_meridian;
    cin >> p[0] >> ch >> p[1] >> ch >> p_meridian;
    int n;
    cin >> n;
    int start_time[n][2], end_time[n][2];
    string start_time_meridian, end_time_meridian;
    for(int i = 0; i < n; i++)
    {
        cin >> start_time[i][0] >> ch >> start_time[i][1] >> ch >> start_time_meridian >> ch >> end_time[i][0] >> ch >> end_time[i][1] >> ch >> end_time_meridian;
        if(start_time_meridian=="PM")
            start_time[i][0] = (start_time[i][0] + 12) % 24;
        if(end_time_meridian=="PM") end_time[i][0]=(end_time[i][0] + 12) % 24;
    }
    
}