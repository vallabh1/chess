#ifndef DEFS_H
#define DEFS_H

typedef unsigned long long U64;

#define NAME "chess"
#define BRD_SQ_NUM 120

enum
{
    EMPTY,
    wP, // white pawn (1)
    wN, // white knight
    wB, // bishop
    wR, // rook
    wQ, // queen
    wK, // king
    bP,
    bN,
    bB,
    bR,
    bQ,
    bK // (12)
};
enum
{
    FILE_A,
    FILE_B,
    FILE_C,
    FILE_D,
    FILE_E,
    FILE_F,
    FILE_G,
    FILE_NONE
};
enum
{
    RANK_1,
    RANK_2,
    RANK_3,
    RANK_4,
    RANK_5,
    RANK_6,
    RANK_7,
    RANK_8,
    RANK_NONE
};

enum
{
    WHITE,
    BLACK,
    BOTH
};

enum
{
    A1 = 21,
    B1,
    C1,
    D1,
    E1,
    F1,
    G1,
    H1,
    A2 = 31,
    B2,
    C2,
    D2,
    E2,
    F2,
    G2,
    H2,
    A3 = 41,
    B3,
    C3,
    D3,
    E3,
    F3,
    G3,
    H3,
    A4 = 51,
    B4,
    C4,
    D4,
    E4,
    F4,
    G4,
    H4,
    A5 = 61,
    B5,
    C5,
    D5,
    E5,
    F5,
    G5,
    H5,
    A6 = 71,
    B6,
    C6,
    D6,
    E6,
    F6,
    G6,
    H6,
    A7 = 81,
    B7,
    C7,
    D7,
    E7,
    F7,
    G7,
    H7,
    A8 = 91,
    B8,
    C8,
    D8,
    E8,
    F8,
    G8,
    H8,
    NO_SQ
};

enum
{
    FALSE,
    TRUE
};

typedef struct
{

    int pieces[BRD_SQ_NUM];
    U64 pawns[3]; // bit board for pawns

    int KingSq[2]; // current square of both the kings

    int side;
    int enPassant; // active enpassant square
    int fiftyMove;

    int ply;
    int hisPly;

    U64 posKey; // unique position keys for positions

    int pceNum[13];   // total number of pieces of each type from the enum
    int bigpieces[2]; // number of pices other than pawns
    int majpieces[2]; // number of rooks and queens
    int minpieces[2]; // number of bishops and knights
} S_BOARD;

#endif
