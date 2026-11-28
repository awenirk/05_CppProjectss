#pragma once

enum ToolsLevel { NONE, WOODEN, STONE, COPPER, IRON, GOLD, DIAMOND };

class Resources {
    int wood = 0;
    int planks = 0;
    int cobblestone = 0;
    int coal = 0;
    int copper_ore = 0;
    int copper = 0;
    int iron_ore = 0;
    int iron = 0;
    int gold_ore = 0;
    int gold = 0;
    int diamonds = 0;

public:

    void getWood()const {}
    void getPlanks()const {}
    void getCobblestone()const {}
    void getCoal()const {}
    void getCopperOre()const {}
    void getCopper()const {}
    void getIronOre()const {}
    void getIron()const {}
    void getGoldOre()const {}
    void getGold()const {}
    void getDiamonds()const {}

    void setWood() {}
    void setPlanks() {}
    void setCobblestone() {}
    void setCoal() {}
    void setCopperOre() {}
    void setCopper() {}
    void setIronOre() {}
    void setIron() {}
    void setGoldOre() {}
    void setGold() {}
    void setDiamonds() {}

};
