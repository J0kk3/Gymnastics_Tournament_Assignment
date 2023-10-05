#pragma once

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

pair<int, vector<string>> determineMaxScore(int totalScore0, int totalScore1, int totalScore2)
{
    int maxScore = max(totalScore0, max(totalScore1, totalScore2));
    vector<string> winners;
    if (totalScore0 == maxScore)
        winners.push_back("Contestant 0");
    if (totalScore1 == maxScore)
        winners.push_back("Contestant 1");
    if (totalScore2 == maxScore)
        winners.push_back("Contestant 2");

    return { maxScore, winners };
}