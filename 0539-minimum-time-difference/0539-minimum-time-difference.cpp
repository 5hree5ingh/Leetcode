class Solution {
public:
      int findMinDifference(vector<string> &timePoints)
{
    vector<int> time;
    for (int i = 0; i < timePoints.size(); i++)
    {
        // Split hours and minutes from the time string
        string hourStr = timePoints[i].substr(0, 2);
        string minuteStr = timePoints[i].substr(3, 2);

        // Convert hours and minutes to integers
        int hours = stoi(hourStr);
        int minutes = stoi(minuteStr);

        // Calculate total minutes
        int totalMinutes = hours * 60 + minutes;

        //    cout<<totalMinutes<<endl;
        time.push_back(totalMinutes);
    }
    sort(time.begin(), time.end());
    int min = INT_MAX;

    for (int i = 0; i < time.size() - 1; i++)
    {
        int diff = std::min(time[i + 1] - time[i],1440-(time[i + 1] - time[i]));
        if (diff < min)
        {
            min = diff;
        }
    }
    int v=std::min(min,std::min(-time[0] + time[time.size()-1],1440-(-time[0] + time[time.size()-1])));
    return v;
}
};
