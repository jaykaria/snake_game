#include "GameApplication.h"
#include <bits/stdc++.h>
using namespace std;
class GameApplicationImpl
{
    GameApplicationImpl(){
        Board board(boardSize, snakes, ladders);
        Game game(board,playerIds);
    }
    string GameApplication::createGame(int boardSize, map<int, int> snakes, map<int, int> ladders, vector<int> playerIds){
        return game.gameId;
    }

    bool GameApplication::holdDice(string gameId, int playerId)
    {
        return palyerPartOfGame(playerId);
        if(gameId!=game.gameId) return false;
        return game.dice.firstDiceHolder(playerId);
    }

    bool GameApplication::rollDiceAndMove(string gameId, int playerId)
    {
        if (!valid_dice_holder) return false;
    } 

    bool valid_dice_holder(Game game)
    {
        return false;
    }

    bool palyerPartOfGame(int playerId)
    {
     for(int i=0;i<game.players;i++){
        if(playerId==players[i])
            {
                return true;
            }
        }
        return false;
    }

    int main(){
        int boardSize=8;
        vector<int> snakes;
        map<int,int> sn;
        sn.insert(10, 5);
        sn.insert(11, 5);
        sn.insert(25, 35);
        snakes.push_back(sn);


        vector<int> ladders;
        map<int,int> ld;
        ld.insert(10, 5);
        ld.insert(11, 5);
        ld.insert(25, 35);
        ladders.push_back(ld);

        vector<Player> players;
        Player p1(1, "player X");
        Player p2(2, "player Y");

        GameApplicationImpl gameStart = new GameApplicationImpl();
        int game_id = gameStart.createGame(boardSize,snakes,ladders,players);
        cout<<game_id<<endl;
        bool dice_holded = gameStart.holdDice(game_id, players[0]);
        cout<<dice_holded<<endl;
    }
};

// interview@barraiser.com