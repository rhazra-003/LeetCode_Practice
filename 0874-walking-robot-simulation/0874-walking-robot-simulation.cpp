class Solution {   
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0, y = 0, maxDis = -1;
        char dir = 'n';
        map<pair<int,int>,int> obs;
        for(auto o : obstacles) {
            obs[{o[0],o[1]}] = 1;
        }
        for(int i = 0; i < commands.size();i++) {
            if(commands[i] == -1)
                dir = right(dir);
            else if(commands[i] == -2)
                dir = left(dir);
            else {
                if(dir == 'n' || dir == 's')
                    y = move(x,y,commands[i],dir,obs);
                else
                    x = move(x,y,commands[i],dir,obs);
            }
            if(maxDis < x*x + y*y)
                  maxDis = x*x + y*y;
        }
        return maxDis;
    }
    int move(int x, int y, int m, char dir, map<pair<int,int>,int> &obs ) {
        switch (dir) {
            case 'n':
                while(m--) {
                    if(obs.count({x,y+1}))
                        break;
                    else
                        y = y+1;
                }
                return y;
            case 's':
                while(m--) {
                    if(obs.count({x,y-1}))
                        break;
                    else
                        y = y-1;
                }
                return y;
            case 'e':
                while(m--) {
                    if(obs.count({x+1,y}))
                        break;
                    else
                        x = x+1;
                }
                return x;
            case 'w':
                while(m--) {
                    if(obs.count({x-1,y}))
                        break;
                    else
                        x = x-1;
                }
                return x;   
        }
        return -1;
    }
    char left(char dir) {
        switch(dir) {
        case 'n': return 'w';
        case 'e': return 'n';
        case 's': return 'e';
        case 'w': return 's';
        }
        return 'n';
    }
    char right(char dir) {
        switch(dir) {
        case 'n': return 'e';
        case 'e': return 's';
        case 's': return 'w';
        case 'w': return 'n';
        }
        return 'n';
    }
};