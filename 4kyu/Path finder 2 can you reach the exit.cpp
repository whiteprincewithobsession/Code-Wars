#include <iostream>
#include <vector>
#include <sstream>

bool is_valid_move(int x, int y, int n, const std::vector<std::vector<char>>& maze, std::vector<std::vector<bool>>& visited) {
    return x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == '.' && !visited[x][y];
}

bool can_reach_exit(int x, int y, int n, const std::vector<std::vector<char>>& maze, std::vector<std::vector<bool>>& visited) {
    visited[x][y] = true;
    if (x == n - 1 && y == n - 1) {
        return true;
    }
    int dx[] = {0, 1, 0, -1}; 
    int dy[] = {-1, 0, 1, 0}; 
    for (int i = 0; i < 4; ++i) {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if (is_valid_move(new_x, new_y, n, maze, visited)) {
            if (can_reach_exit(new_x, new_y, n, maze, visited)) {
                return true;
            }
        }
    }

    return false;
}

bool path_finder(const std::string& maze) {
    std::istringstream iss(maze);
    std::vector<std::vector<char>> maze_grid;
    std::string line;

    while (std::getline(iss, line)) {
        maze_grid.emplace_back(line.begin(), line.end());
    }
    int n = maze_grid.size();
    std::vector<std::vector<bool>> visited(n, std::vector<bool>(n, false));
    return can_reach_exit(0, 0, n, maze_grid, visited);
}