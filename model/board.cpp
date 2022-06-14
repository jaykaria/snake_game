class Board{
    private:
        string boardId;
        int boardSize;
        map<int, int> snakes;
        map<int, int> ladders;
        vector<vector<Cell>> cells;
    public:
        Board(int boardSize, map<int, int> snakes, map<int, int> ladders)
        {
            this.boardSize = boardSize;
            this.snakes= snakes;
            this.ladders= ladders;
        }
};