
/*

y
^
|
|
****************************
*                          *
*                          *
*                          *
*                          *
*                          *
*                          *
*                          *
*                          *
****************************  ---> x
(原点)


*/


#define REGION_LEN 10

// 阵营
typedef enum CAMP {
    e_camp_begin;
    
    e_neutrality;   // 中立阵营
    e_evil;         // 邪恶阵营
    e_justice;      // 正义阵营

    e_camp_end;
} CAMP;

// 种族
typedef enum RACE {
    e_race_begin;
    
    // 中立阵营
    e_neutrality_begin;
    e_human;    // 人类
    e_orcish;   // 兽人
    e_elf;      // 精灵 
    e_neutrality_end;
    
    // 邪恶阵营
    e_evil_begin;
    e_devil;    // 恶魔
    e_vampire;  // 吸血鬼
    e_werwolf;  // 狼人
    e_evil_end;
    
    // 正义阵营
    e_justice_begin;
    e_angel;    // 天使
    e_unicorn;  // 独角兽
    e_dragon;   // 龙
    e_justice_end;

    e_race_end;
} RACE;

// 方向
typedef enum DIRECTION {
    e_north;
    e_east;
    e_south;
    e_west;
} DIRECTION;





class Position {
public:
    Position():
        x(0), y(0), z(0);
    
    Position(int _x, int _y, int _z):
        x(_x), y(_y), z(_z) {}



    void setPos(Position* ppos) {
        x = pos->GetX();
        y = pos->GetY();
        z = pos->GetZ();
    }

    void SetPos(Position& refpos) {
        x = pos.GetX();
        y = pos.GetY();
        z = pos.GetZ();
    }

    void SetPos(int _x, int _y, int _z) {
        x = _x; y = _y; z = _z;
    }

    void GetPos(Position* ppos) {
        ppos->setPos(x, y, z);
    }

    void GetPos(Position& refpos) {
        ppos.setPos(x, y, z);
    }

    Position* GetPos() {
        return this;
    }

    int GetX() { return x; }
    int GetY() { return y; }
    int GetZ() { return z; }

private:
    int x;
    int y;
    int z;
};


class Region {
public:
    Region(Position* pos):
        pos(pos), len(REGION_LEN) {};

    Region(const Position& pos):
        pos(pos), len(REGION_LEN) {};

private:
    Position pos;
    int len; // 边长
};


class PlayerBase {
public:
    Posititon GetPos();
    
    void SetPos(Position* ppos);
    void SetPos(const Position& refpos);

// 角色移动
    // 向左转
    void TurnLeft();
    // 向右转
    void TurnRight();
    // 向后转
    void TurnBack();
    // 转向某一个方向
    void TurnTo();
    // 向前走
    void Move(int distance);
    
    // 设置速度
    void SetSpeed(float speed);
    


private:
    Position pos;
    int regionId;  // 当前所属region 的 ID
    float speed;            // 速度
    float attack_radius;    // 攻击半径
    int attack;             // 攻击力
    int phylactic;          // 防御力
    int hp;                 // 血量
    int camp;               // 阵营
    int race;               // 种族
    DIRECTION face_direction; // 脸的朝向（正前方的方向）
};


/*

动作绑定到角色身上



*/


class LocalPlayer {
public:
    GetPos();
    SetPos();



};


class RemotePlayer {

};


