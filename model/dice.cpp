class dice{
    int diceId;
    int dice_holder=0;
    static bool is_available = false;

    bool firstDiceHolder(int playerId)
    {
        lock(playerId);
        if (dice_holder==playerId)
        {
            // setDiceHolder(playerId);
            return true;
        }
        else
            return false;
    }

    void setDiceHolder(int playerId)
    {
        dice_holder=playerId;
    }

    int getDiceHolder()
    {
        return dice_holder;
    }

    void unlock(int playerId)
    {
        if(playerId==dice_holder)
            is_available=false;
    }

    void lock(int playerId)
    {
        while(!is_available)
        {
            is_available=true;
            //crtical section
                dice_holder=playerId;
            break;
        }
    }
};