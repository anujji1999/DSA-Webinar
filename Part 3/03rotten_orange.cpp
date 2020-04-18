#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int>> dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

int orangesRotting(vector<vector<int>>& grid) {

    queue<pair<int, int>> que;
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
            if(grid[i][j] == 2){
                que.push({i, j});
            }
        }
    }

    int time = 0;
    while(!que.empty()){
        time++;
        int size = que.size();
        while(size-- > 0){
            pair p = que.front();

            for(int i=0; i<dir.size(); i++){
                int r = p.first + dir[i][0];
                int c = p.second + dir[i][1];

                if( r >= 0 && c >= 0 && r < grid.size() && c < grid[0].size() && grid[r][c] == 1){
                    grid[r][c] = 2;
                    que.push({r, c});
                }
            }

        }
    }

    if(time == 0){
        return time;
    }else{
        return time-1;
    }
        
}