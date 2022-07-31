#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isValid(int x, int y, vector<vector<int>> m, vector<vector<int>> visited)
    {
        int n = m.size();
        if(x<n && x>=0 &&y<n && y>=0&&m[x][y]!=0&&visited[x][y]!=1) return true;
        return false;
    }
    void solve(vector<string> &ans, int x, int y, int n, string path, vector<vector<int>> visited,vector<vector<int>> m)
    {
        if(x==n-1 && y==n-1) 
        {
         ans.push_back(path);
         return;
        }
        visited[x][y]=1;
        int nextX, nextY;
        
        //down
        nextX = x+1; nextY = y;
        if(isValid(nextX, nextY,m,visited))
        {
            path.push_back('D');
            solve(ans,nextX,nextY,n,path,visited,m);
            path.pop_back();
        }
        
        //UP
        nextX = x-1;  nextY = y;
        if(isValid(nextX, nextY,m,visited))
        {
            path.push_back('U');
            solve(ans,nextX,nextY,n,path,visited,m);
            path.pop_back();
        }
        
        //Left
        nextX = x; nextY = y-1;
        if(isValid(nextX, nextY,m,visited))
        {
            path.push_back('L');
            solve(ans,nextX,nextY,n,path,visited,m);
            path.pop_back();
        }
        
        //right
        nextX = x;
        nextY = y+1;
        if(isValid(nextX, nextY,m,visited))
        {
            path.push_back('R');
            solve(ans,nextX,nextY,n,path,visited,m);
            path.pop_back();
        }
        
        
        visited[x][y]=0;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        
        if(!m[0][0]) return {"-1"}; 
        
        vector<vector<int>> visited = m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) visited[i][j]=0;
        }
        
        string path="";
        
        solve(ans,0,0,n,path,visited,m);
        
        return ans;
        
    }