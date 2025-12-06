class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        //time to get to target = (target - position)/speed
        vector<pair<int,int>> cars;
        for(int i = 0; i < position.size(); ++i){
            cars.push_back(std::make_pair(position[i], speed[i]));
        }
        std::sort(cars.begin(), cars.end());
        vector<double> time;
        for(auto i = cars.begin(); i != cars.end(); ++i){
            time.push_back(((0.0 + target - (*i).first)/ (*i).second));
        }
        stack<double> fleets;
        if(time.size() > 0){
            fleets.push(time[time.size()-1]);
        }
        for(int i = time.size() - 2; i >-1;--i){
            if(time[i] > fleets.top()){
                fleets.push(time[i]);
            }
        }
        return fleets.size();
    }
};