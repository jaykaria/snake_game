class GameApplication{

    string createGame(int boardSize, map<int, int> snakes, map<int, int> ladders, vector<int> playerIds);
    bool holdDice(string gameId, int playerId);
    bool rollDiceAndMove(string gameId, int playerId);
};