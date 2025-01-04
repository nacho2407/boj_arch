#include <iostream>
#include <set>
#include <vector>

typedef struct node
{
        int num;
        int route;
        bool is_visited;
} node;

typedef struct coord
{
        int y;
        int x;
} coord;

typedef struct coord_cmp
{
        bool operator()(const coord& first, const coord& second) const
        {
                if(first.y == second.y)
                        return first.x < second.x;
                else
                        return first.y < second.y;
        }
} coord_cmp;

int main(void)
{
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        int m, n;
        std::cin >> m >> n;

        std::vector<std::vector<node>> map(m, std::vector<node>(n));
        for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                        int temp;
                        std::cin >> temp;
                        map[i][j] = node{temp, 0, false};
                }
        }

        std::set<coord, coord_cmp> queue;
        queue.insert(coord{0, 0});

        coord c = *queue.begin();
        queue.erase(queue.begin());

        map[c.y][c.x].route = 1;
        map[c.y][c.x].is_visited = true;

        if(c.y - 1 >= 0 && map[c.y - 1][c.x].num < map[c.y][c.x].num)
                queue.insert(coord{c.y - 1, c.x});
        if(c.x + 1 < n && map[c.y][c.x + 1].num < map[c.y][c.x].num)
                queue.insert(coord{c.y, c.x + 1});
        if(c.y + 1 < m && map[c.y + 1][c.x].num < map[c.y][c.x].num)
                queue.insert(coord{c.y + 1, c.x});
        if(c.x - 1 >= 0 && map[c.y][c.x + 1].num < map[c.y][c.x].num)
                queue.insert(coord{c.y, c.x - 1});

        for(; queue.size() != 0; ) {
                c = *queue.begin();
                queue.erase(queue.begin());

                int route = 0;

                if(c.y > 0 && map[c.y - 1][c.x].num > map[c.y][c.x].num)
                        route += map[c.y - 1][c.x].route;
                if(c.x < n - 1 && map[c.y][c.x + 1].num > map[c.y][c.x].num)
                        route += map[c.y][c.x + 1].route;
                if(c.y < m - 1 && map[c.y + 1][c.x].num > map[c.y][c.x].num)
                        route += map[c.y + 1][c.x].route;
                if(c.x > 0 && map[c.y][c.x - 1].num > map[c.y][c.x].num)
                        route += map[c.y][c.x - 1].route;

                int flag = 0;
                if(map[c.y][c.x].route != route) {
                        map[c.y][c.x].route = route;
                        flag = 1;
                }
                
                map[c.y][c.x].is_visited = true;

                if(c.y > 0 && map[c.y - 1][c.x].num < map[c.y][c.x].num) {
                        if(map[c.y - 1][c.x].is_visited) {
                                if(flag) {
                                        map[c.y - 1][c.x].is_visited = false;
                                        queue.insert(coord{c.y - 1, c.x});
                                }
                        } else
                                queue.insert(coord{c.y - 1, c.x});
                }
                if(c.x < n - 1 && map[c.y][c.x + 1].num < map[c.y][c.x].num) {
                        if(map[c.y][c.x + 1].is_visited) {
                                if(flag) {
                                        map[c.y][c.x + 1].is_visited = false;
                                        queue.insert(coord{c.y, c.x + 1});
                                }
                        } else
                                queue.insert(coord{c.y, c.x + 1});
                }
                if(c.y < m - 1 && map[c.y + 1][c.x].num < map[c.y][c.x].num) {
                        if(map[c.y + 1][c.x].is_visited) {
                                if(flag) {
                                        map[c.y + 1][c.x].is_visited = false;
                                        queue.insert(coord{c.y + 1, c.x});
                                }
                        } else
                                queue.insert(coord{c.y + 1, c.x});
                }
                if(c.x > 0 && map[c.y][c.x - 1].num < map[c.y][c.x].num) {
                        if(map[c.y][c.x - 1].is_visited) {
                                if(flag) {
                                        map[c.y][c.x - 1].is_visited = false;
                                        queue.insert(coord{c.y, c.x - 1});
                                }
                        } else
                                queue.insert(coord{c.y, c.x - 1});
                }
        }

        std::cout << map[m - 1][n - 1].route << std::endl;

        return 0;
}
