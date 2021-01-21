#inclide "common.h"


Posititon PlayerBase::GetPos() {
    return pos;
}

void PlayerBase::SetPos(Position* ppos) {
    pos.setPos(ppos);
}

void PlayerBase::SetPos(Position& refpos) {
    pos.setPos(refpos);
}