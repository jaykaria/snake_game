class game{
    string gameId;
    Board board;
    vector<Player> players;
    Dice dice;

    static int sNextId = 0;

    game(Board board, vector<Player> players)
    {
        gameId = getNextId();
        this.board = board;
        this.players = players;
        Dice();
    }
    int getNextId() { return ++sNextId; }
};