
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
(ԭ��)


*/


#define REGION_LEN 10

// ��Ӫ
typedef enum CAMP {
    e_camp_begin;
    
    e_neutrality;   // ������Ӫ
    e_evil;         // а����Ӫ
    e_justice;      // ������Ӫ

    e_camp_end;
} CAMP;

// ����
typedef enum RACE {
    e_race_begin;
    
    // ������Ӫ
    e_neutrality_begin;
    e_human;    // ����
    e_orcish;   // ����
    e_elf;      // ���� 
    e_neutrality_end;
    
    // а����Ӫ
    e_evil_begin;
    e_devil;    // ��ħ
    e_vampire;  // ��Ѫ��
    e_werwolf;  // ����
    e_evil_end;
    
    // ������Ӫ
    e_justice_begin;
    e_angel;    // ��ʹ
    e_unicorn;  // ������
    e_dragon;   // ��
    e_justice_end;

    e_race_end;
} RACE;

// ����
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
    int len; // �߳�
};


class PlayerBase {
public:
    Posititon GetPos();
    
    void SetPos(Position* ppos);
    void SetPos(const Position& refpos);

// ��ɫ�ƶ�
    // ����ת
    void TurnLeft();
    // ����ת
    void TurnRight();
    // ���ת
    void TurnBack();
    // ת��ĳһ������
    void TurnTo();
    // ��ǰ��
    void Move(int distance);
    
    // �����ٶ�
    void SetSpeed(float speed);
    


private:
    Position pos;
    int regionId;  // ��ǰ����region �� ID
    float speed;            // �ٶ�
    float attack_radius;    // �����뾶
    int attack;             // ������
    int phylactic;          // ������
    int hp;                 // Ѫ��
    int camp;               // ��Ӫ
    int race;               // ����
    DIRECTION face_direction; // ���ĳ�����ǰ���ķ���
};


/*

�����󶨵���ɫ����



*/


class LocalPlayer {
public:
    GetPos();
    SetPos();



};


class RemotePlayer {

};


