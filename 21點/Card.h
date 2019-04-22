#ifndef CARD_H
#define CARD_H
class Card{
	public:
		int Random_Card(int);
		int Card_Number(int);
		int Card_Suit(int);
		int Point(int);
		void print(int);
	private:
		char yn;
};
#endif
