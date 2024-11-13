#ifndef RESIDENT_H
#define RESIDENT_H

class Resident {
protected:
    int blockNumber;
    int studActive;
    int opt;
    bool debtor;
public:
    Resident(int blockNumber, int studActive, int opt);
    int getOpt() const;
    int getStudActive() const;
    int getBlockNumber() const;
    bool getDebtor() const;

    void setOpt(int studentsOPT);
    void setStudActive(int activityType);
    void setBlockNumber(int studentsBlock);
    void setDebtor(bool isDebtor);
};

#endif // RESIDENT_H
