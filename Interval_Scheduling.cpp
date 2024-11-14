//Interval Scheduling (Greedy Algorithm)

#include <iostream>
#include <algorithm>
using namespace std;

int intervalScheduling(int start[], int end[], int n) {
    // Pair end times with start times for easy sorting by end times
    pair<int, int> intervals[n];
    for (int i = 0; i < n; i++) {
        intervals[i] = {end[i], start[i]};
    }

    // Sort intervals by end time
    sort(intervals, intervals + n);

    int count = 0;
    int lastEnd = -1;

    for (int i = 0; i < n; i++) {
        // If current interval starts after or when the last one ended
        if (intervals[i].second >= lastEnd) {
            count++;             // Select this interval
            lastEnd = intervals[i].first;  // Update last end time
        }
    }

    return count; // Return the maximum number of non-overlapping intervals
}

int main() {
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    int start[n], end[n];
    cout << "Enter the start and end times of the intervals:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> start[i] >> end[i];
    }

    int maxIntervals = intervalScheduling(start, end, n);
    cout << "The maximum number of non-overlapping intervals is: " << maxIntervals << endl;

    return 0;
}
