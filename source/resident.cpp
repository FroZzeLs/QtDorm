#include "./../headers/resident.h"
#include "./../headers/logic.h"

Resident::Resident(int blockNumber, int studActive, int opt)
    : blockNumber(blockNumber), studActive(studActive), opt(opt)
{debtor = opt < normOfOpt() ? true : false;}

int Resident::getBlockNumber() const {
    return blockNumber;
}

bool Resident::getDebtor() const {
    return debtor;
}


int Resident::getStudActive() const {
    return studActive;
}

int Resident::getOpt() const {
    return opt;
}

void Resident::setOpt(int studentsOpt) {
    opt = studentsOpt;
}

void Resident::setStudActive(int activityType) {
    studActive = activityType;
}

void Resident::setBlockNumber(int studentsBlock) {
    blockNumber = studentsBlock;
}

void Resident::setDebtor(bool isDebtor) {
    debtor = isDebtor;
}

