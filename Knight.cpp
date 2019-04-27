#include<iostream>
#include<fstream>
#include <queue>

std::pair<int,int> getStart(char **map, std::pair<int,int> map_size) {
	for (int i=0;i<map_size.first;i++) {
		for (int j=0;j<map_size.second;j++) {
			if (map[i][j] == 'S')
				return std::make_pair(i,j);
		}
	}
}

std::pair<int,int> getEnd(char **map, std::pair<int,int> map_size) {
	for (int i=0;i<map_size.first;i++) {
		for (int j=0;j<map_size.second;j++) {
			if (map[i][j] == 'G')
				return std::make_pair(i,j);
		}
	}
}

bool canFill(char **map,std::pair<int,int> map_size) {
	
}

bool DFS(std::pair<int,int> start,std::pair<int,int> end,
	std::pair<int,int> size,char **map) {
	int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 }; 
    int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 }; 
	for (int j=0;j<8;j++) {
		
	}
}


int main()
{
	char **map;
	int M, N;

	std::ifstream in("knight1.txt");
	in >> M >> N;

	map = new char*[M];
	for (int j=0;j<M;j++)
		map[j] = new char[N];

	for (int i=0;i<M;i++) {
		for (int j=0;j<N;j++) {
			in >> map[i][j]; 
		}
	}

	std::pair<int,int> start = getStart(map,std::make_pair(M,N));
	std::pair<int,int> end = getEnd(map,std::make_pair(M,N));

	return 0;

}