class Politician {
	private:
		int typeOfPol; // 0 is senator 1 is house
		int polNumber; // to identify who we're talking about
		int score; // obviously we need to know what the score is




	public:



};





class Bracket {
	private:
		unordered_map<int, Politician> bracket;



	public:
		string displayBracket();



};


class User {
	private:
		string email;
		string last_name;
		string first_name;
		int leagueId;


	public:



};


class League {
	private:
		vector<User> leagueMembers;
		string leagueName;
		int leagueId;

	public:



};

class Game {
	private:
		unordered_map<int, League> leagues; // first int represents leagueId

	public:
	

};


int main() {
	





}
