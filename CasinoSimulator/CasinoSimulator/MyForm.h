#pragma once
#include "PokerTemplate.h"
#include "position.h"
#include "Card.h"
#include "Deck.h"
#include "Location.h"
#include "Player.h"
#include "AI.h"
#include "logic.h"
#include <string>
namespace CasinoSimulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  checkButton;
	private: System::Windows::Forms::Button^  betButton;
	private: System::Windows::Forms::Button^  foldButton;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkButton = (gcnew System::Windows::Forms::Button());
			this->betButton = (gcnew System::Windows::Forms::Button());
			this->foldButton = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 100);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(341, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 51);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Start Game";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(627, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"$2000.00";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(568, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Balance";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Location = System::Drawing::Point(695, 682);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Quit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(418, 326);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(119, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(338, 333);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"betting pool";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// checkButton
			// 
			this->checkButton->Enabled = false;
			this->checkButton->Location = System::Drawing::Point(91, 550);
			this->checkButton->Name = L"checkButton";
			this->checkButton->Size = System::Drawing::Size(75, 23);
			this->checkButton->TabIndex = 7;
			this->checkButton->Text = L"Check";
			this->checkButton->UseVisualStyleBackColor = true;
			this->checkButton->Visible = false;
			this->checkButton->Click += gcnew System::EventHandler(this, &MyForm::checkButton_Click);
			// 
			// betButton
			// 
			this->betButton->Enabled = false;
			this->betButton->Location = System::Drawing::Point(91, 591);
			this->betButton->Name = L"betButton";
			this->betButton->Size = System::Drawing::Size(75, 23);
			this->betButton->TabIndex = 7;
			this->betButton->Text = L"Bet";
			this->betButton->UseVisualStyleBackColor = true;
			this->betButton->Visible = false;
			this->betButton->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// foldButton
			// 
			this->foldButton->Enabled = false;
			this->foldButton->Location = System::Drawing::Point(91, 633);
			this->foldButton->Name = L"foldButton";
			this->foldButton->Size = System::Drawing::Size(75, 23);
			this->foldButton->TabIndex = 7;
			this->foldButton->Text = L"Fold";
			this->foldButton->UseVisualStyleBackColor = true;
			this->foldButton->Visible = false;
			this->foldButton->Click += gcnew System::EventHandler(this, &MyForm::foldButton_Click);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(196, 593);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->Location = System::Drawing::Point(193, 577);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Bet amount";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(645, 408);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Computer2";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(439, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Computer1";
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(108, 408);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Computer0";
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(439, 526);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Your Hand";
			this->label7->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(32, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(222, 148);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Play Again\?";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(653, 617);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 50);
			this->button4->TabIndex = 11;
			this->button4->Text = L"display rules";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(800, 740);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->foldButton);
			this->Controls->Add(this->betButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkButton);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Graphics ^g;
		Pen^ myPen;
		//the deck of cards for the game
		Deck^ pokerDeck;
		//The tmeplate for the game
		PokerTemplate^ pT;
		int turn = 0;
		//The amount of cards in the river
		int riverSize = 0;
		//fold value for player to make sure player loses
		bool fold = false;
		//Draws a card with the given icon, and location
		Logic^ playerLogic;
		array<Logic^, 1> ^compLogics = gcnew array<Logic^, 1>(3);
		void DrawCard(System::Drawing::Icon^ icon, Location2^ loc, int side)
		{//side refers if it is vertical(0) or horizantal(1)

			myPen = gcnew Pen(Drawing::Color::Black);
			int x = loc->getX();
			int y = loc->getY();
			Rectangle card = Rectangle(x, y, 50, 68);
			Rectangle sideCard = Rectangle(x, y, 68, 50);
			if (side == 0)
			{

				g->DrawIcon(icon, sideCard);
			}
			else if (side == 1)
			{
				//
				g->DrawIcon(icon, sideCard);
			}



		}
		//same as DrawCard but draws a bigger card for the deck,players hand and river
		void DrawBigCard(System::Drawing::Icon^ icon, Location2^ loc, int side)
		{

			myPen = gcnew Pen(Drawing::Color::Black);
			int x = loc->getX();
			int y = loc->getY();
			Rectangle card = Rectangle(x, y, 100, 136);
			Rectangle sideCard = Rectangle(x, y, 136, 100);
			if (side == 0)
			{
				g->DrawIcon(icon, card);
			}
			else if (side == 1)
			{
				g->DrawIcon(icon, sideCard);
			}

		}


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		pokerDeck = gcnew Deck();
		pT = gcnew PokerTemplate();
		PictureBox^ back = gcnew PictureBox();
		back->Location = Point(0, 0);
		back->Parent = this;
		back->Size::set(Drawing::Size(800, 741));
		back->Load("background.png");
		
		
		g = back->CreateGraphics();
		//Initilizes the player and draws two cards for the players hand
		
		
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		Application::Exit();
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		pokerDeck->makeCards();
		pokerDeck->setIcons();
		startAction();
		
		//To enable the labels of the hands
		label4->Visible = true;
		label5->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		//To enable quitting 
		button2->Enabled = true;
		button1->Visible = false;
		label2->Visible = true;
		textBox2->Visible = true;
		//to enable the bet, check, fold button
		betButton->Enabled = true;
		checkButton->Enabled = true;
		foldButton->Enabled = true;

		betButton->Visible = true;
		checkButton->Visible = true;
		foldButton->Visible = true;

		label3->Visible = true;
		label3->Enabled = true;
		textBox3->Visible = true;
		textBox3->Enabled = true;

		//draws the deck and initilizes its location
		pokerDeck->setLocation(pT->getDeckLocation());
		System::Drawing::Icon^ tempIcon = gcnew System::Drawing::Icon("cardback.ico");
		DrawBigCard(tempIcon,pokerDeck->getLocation(), 0);

		DrawWorld();
		
		
		
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//changes bet amount to int and subtracts amount from balance
	int value, currentBets;
	if ((Int32::TryParse(textBox3->Text, value)) && (value >= 1))
	{
		pT->getPlayer()->changeTotal((value*-1));
		currentBets = value;
		//changes balance amount back to string and changes balance display
		std::string sValue = std::to_string(pT->getPlayer()->getTotal());
		String^ totalValue = gcnew String(sValue.c_str());
		textBox1->Text = totalValue;
		for (int i = 0; i < 3; i++)
		{
			pT->getAI(i)->AIbet(value);
			currentBets += value;
		}
		//changes pot total to previous pot+bet amount
		pT->addToPool(currentBets);
		std::string sValue2 = std::to_string(pT->getBetPool());
		String^ totalValue2 = gcnew String(sValue2.c_str());
		textBox2->Text = totalValue2;

		Refresh();
		nextTurn();
		DrawWorld();
		if (riverSize == 5)
		{
			
			DrawWinScreen();
			fillHands();
			Player^ winner = getWinner();
			if (getWinner() == pT->getPlayer())
			{
				MessageBox::Show("Player Wins");
			}
			else
			{
				if (winner == pT->getAI(1))
				{
					MessageBox::Show("Computer0 Wins");
				}
				else if (winner == pT->getAI(0))
				{
					MessageBox::Show("Computer1 Wins");
				}
				else if (winner == pT->getAI(2))
				{
					MessageBox::Show("Computer2 Wins");
				}
				
				
			}
			
			getWinner()->changeTotal(pT->getBetPool());
			std::string sValue = std::to_string(pT->getPlayer()->getTotal());
			String^ totalValue = gcnew String(sValue.c_str());
			textBox1->Text = totalValue;
			
			betButton->Enabled = false;
			checkButton->Enabled = false;
			foldButton->Enabled = false;
			//restart();
		}
	}
	else
	{
		MessageBox::Show("That bet amount is invalid. Must enter an integer bet amount greater than 0.");
	}
	
}
private: System::Void checkButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Refresh();
	nextTurn();
	DrawWorld();
	
	if (riverSize == 5)
	{
		DrawWinScreen();
		fillHands();
		Player^ winner = getWinner(); 
		
		if (getWinner() == pT->getPlayer())
		{
			MessageBox::Show("Player Wins");
		}
		else if (winner == pT->getAI(1))
		{
			MessageBox::Show("Computer0 Wins");
		}
		else if (winner == pT->getAI(0))
		{
			MessageBox::Show("Computer1 Wins");
		}
		else if (winner == pT->getAI(2))
		{
			MessageBox::Show("Computer2 Wins");
		}

		getWinner()->changeTotal(pT->getBetPool());
		
		betButton->Enabled = false;
		checkButton->Enabled = false;
		foldButton->Enabled = false;
		//restart();
	}
}
private: System::Void foldButton_Click(System::Object^  sender, System::EventArgs^  e) 
{
	while (riverSize != 5)
	{
		Refresh();
		nextTurn();
		DrawWorld();
	}
	if (riverSize == 5)
	{
		DrawWinScreen();
		fold = true;
		fillHands();
		
		Player^ winner = getWinner();
		
		if (winner == pT->getAI(1))
		{
			MessageBox::Show("Computer0 Wins");
		}
		else if (winner == pT->getAI(0))
		{
			MessageBox::Show("Computer1 Wins");
		}
		else if( winner==pT->getAI(2))
		{
			MessageBox::Show("Computer2 Wins");
		}

		getWinner()->changeTotal(pT->getBetPool());
		
		betButton->Enabled = false;
		checkButton->Enabled = false;
		foldButton->Enabled = false;
		//restart();
	}
	
}
	 void restart()
	 {
		 

		 Refresh();
		 textBox2->Text = "";
		 
		 betButton->Enabled = true;
		 checkButton->Enabled = true;
		 foldButton->Enabled = true;
		 //the deck of cards for the game
		  pokerDeck->resetDeck();
		 //The template for the game
		 pT->resetTemplate();
		 pT->getPlayer()->resetPlayer();
		 for (int i = 0; i < 3; i++)
		 {
			
			 pT->getAI(i)->resetPlayer();
		 }
		 for (int i = 0; i < 4; i++)
		 {

			 pT->getPosition(i)->resetPos();
		 }
		 fold = false;
		 startAction();
		 riverSize = 0;
		 turn = 0;
		 resetCounts();
		 button3->Visible = false;
		DrawWorld();
		 
		 
		
	}
		 void nextTurn()
		 {
			 
			 if (turn == 0)
			 {
				 //if the first turn hasn't taken place then it draws three cards for the river
				 for (int i = 0; i < 3; i++)
				 {
					 
					 Card^ temp = pokerDeck->draw();
					 
					 temp->setLocation(pT->getRiver());
					 pT->addRiverCard(temp);
					 riverSize++;
				 }
				/*int x = 0;
			for (int i = 0; i < 3; i++)
			{
				
				x = pT->getComputerLogic(i)->HandValue();
				pT->addToPool(pT->getAI(i)->intelligance(x));
			}*/
				 turn++;
			 }
			 else
			 {
				 //draws one card afterwards
				 Card^ temp = pokerDeck->draw();
				 temp->setLocation(pT->getRiver());
				 pT->addRiverCard(temp);
				 riverSize++;
			 }
		 }
		 void DrawWorld()
		 {
			 //resets all of the pointers to draw all the cards
			 resetCounts();
			 //draws the deck
			System::Drawing::Icon^ tempIcon = gcnew System::Drawing::Icon("cardback.ico");
			 DrawBigCard(tempIcon, pokerDeck->getLocation(), 0);
			 //Draws the players cards
			 for (int i = 0; i < 2; i++)
			 {
				 Card^ playCard = pT->getPlayer()->getHand();
				 DrawBigCard(playCard->getIcon(), playCard->getLocation(), 0);
			 }

			 //Draws the AIs cards

			 for (int i = 0; i < 4; i++)
			 {
				 for (int j = 0; j < 2; j++)
				 {
					 //Position 1 is for the player so it skips this position while drawing the AI hands
					 if (i != 1)
					 {
						 int temp = 0;

						 Card^ tempCard;
						 //corrects the off set of skipping i=0 by setting i=3 to the second position in computers
						 if (i == 3)
						 {
							 tempCard = pT->getAI(1)->getHand();
						 }
						 else
						 {
							 tempCard = pT->getAI(i)->getHand();
						 }
						 System::Drawing::Icon^ icon = gcnew System::Drawing::Icon("cardback.ico");
						 System::Drawing::Icon^ sideIcon = gcnew System::Drawing::Icon("cardbackside.ico");
						 //draws the side cards
						 if (i == 2 || i == 3)
						 {
							 DrawCard(sideIcon, tempCard->getLocation(), 1);
						 }
						 //draws a normal card
						 else
						 {
							 DrawCard(icon, tempCard->getLocation(), temp);
						 }

					 }
				 }
			 }
			 //Draws the river
			 for (int i = 0; i < riverSize; i++)//only draws the cards in river that have been drawn
			 {
				 Card^ temp = pT->getRiverCard();
				 DrawBigCard(temp->getIcon(), temp->getLocation(), 0);
			 }
		 }
		 void resetCounts()
		 {
			 //resets the pointers in player, the PokerTemplate and the computers
			 pT->reset();
			 pT->getPlayer()->reset();
			 for (int i = 0; i < 3; i++)
			 {
				 pT->getAI(i)->reset();
			 }
		 }
		 void startAction()
		 {
			 
			 //Initilizes the player and draws two cards for the players hand
			 
			 for (int i = 0; i < 2; i++)
			 {
				
				 Card^ tempCard = pokerDeck->draw();
				 tempCard->setLocation(pT->getPosition(2)->getLocation());
				 pT->getPlayer()->addCard(tempCard);

			 }
			 //Initilizes the AIs and gives them all two cards
			 for (int i = 0; i < 3; i++)
			 {

				 Card^ tempCard1 = (pokerDeck->draw());
				 Card^ tempCard2 = (pokerDeck->draw());
				 //skips position 1 as it is reserve for the player
				 if (i == 2)
				 {
					 //corrects the off set of skiping i=1 by picking postion three for the AI
					 tempCard1->setLocation(pT->getPosition(3)->getLocation());
					 tempCard2->setLocation(pT->getPosition(3)->getLocation());
				 }
				 else
				 {
					 tempCard1->setLocation(pT->getPosition(i)->getLocation());
					 tempCard2->setLocation(pT->getPosition(i)->getLocation());
				 }

				 pT->getAI(i)->addCard(tempCard1);
				 pT->getAI(i)->addCard(tempCard2);
			 }
		 
		 }
		 Player^ getWinner()
		 {
			Player^ winner ;
			Logic^ winLogic = pT->getPlayerLogic();
			std::string sValue;
			if (fold == false)
			{
				sValue = std::to_string(pT->getPlayerLogic()->HandValue());
				winner = pT->getPlayer();
			}
			else
			{
				sValue = "0";
			}
			String^ totalValue;
			 for (int i = 0; i < 3; i++)
			 {
				 sValue += " ";
				 sValue += std::to_string(pT->getComputerLogic(i)->HandValue());
				 
				 totalValue = gcnew String(sValue.c_str());
				
				 if (pT->getComputerLogic(i)->HandValue() > winLogic->HandValue())
				 {
					 winner = pT->getAI(i);
					 winLogic = pT->getComputerLogic(i);
				 }
				 else if (pT->getComputerLogic(i)->HandValue() == winLogic->HandValue())
				 {
					 if (pT->getComputerLogic(i)->HighCard() > winLogic->HighCard())
					 {
						 winner = pT->getAI(i);
						 winLogic = pT->getComputerLogic(i);
					 }
				 }
				 button3->Visible = true;
			 }
			 MessageBox::Show(totalValue);
			 
			 return winner;
		 }
		 void fillHands()
		 {
			 resetCounts();

			 for (int i = 0; i < riverSize; i++)
			 {

				 pT->getPlayer()->addCard(pT->getRiverCard());
			 }
			 resetCounts();

			 for (int j = 0; j < 3; j++)
			 {

				 for (int i = 0; i < riverSize; i++)
				 {
					 pT->getAI(j)->addCard(pT->getRiverCard());
				 }
				 resetCounts();
			 }
			 pT->updateLogic();
		 }
		 std::string displayRules()
		 {
			 std::fstream infile;
			 infile.open("poker rules.txt");
			 std::string temp;
			 std::string total = "";
			 while (!infile.eof())
			 {
				 getline(infile, temp);

				 total += temp;
				 total += "\n";
			 }
			 return total;
		 }
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ temp = gcnew String(displayRules().c_str());
	MessageBox::Show(temp);
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 void DrawWinScreen()
		 {
			 Refresh();
			 {
				 //resets all of the pointers to draw all the cards
				 resetCounts();
				 //draws the deck
				 System::Drawing::Icon^ tempIcon = gcnew System::Drawing::Icon("cardback.ico");
				 DrawBigCard(tempIcon, pokerDeck->getLocation(), 0);
				 //Draws the players cards
				 for (int i = 0; i < 2; i++)
				 {
					 Card^ playCard = pT->getPlayer()->getHand();
					 DrawBigCard(playCard->getIcon(), playCard->getLocation(), 0);
				 }

				 //Draws the AIs cards

				 for (int i = 0; i < 4; i++)
				 {
					 for (int j = 0; j < 2; j++)
					 {
						 //Position 1 is for the player so it skips this position while drawing the AI hands
						 if (i != 1)
						 {
							 int temp = 0;

							 Card^ tempCard;
							 //corrects the off set of skipping i=0 by setting i=3 to the second position in computers
							 if (i == 3)
							 {
								 tempCard = pT->getAI(1)->getHand();
							 }
							 else
							 {
								 tempCard = pT->getAI(i)->getHand();
							 }
							 
							 //draws the side cards
							 if (i == 2 || i == 3)
							 {
								 DrawCard(tempCard->getIcon(), tempCard->getLocation(), 1);
							 }
							 //draws a normal card
							 else
							 {
								 DrawCard(tempCard->getIcon(), tempCard->getLocation(), temp);
							 }

						 }
					 }
				 }
				 //Draws the river
				 for (int i = 0; i < riverSize; i++)//only draws the cards in river that have been drawn
				 {
					 Card^ temp = pT->getRiverCard();
					 DrawBigCard(temp->getIcon(), temp->getLocation(), 0);
				 }
			 }
		 }
		 void PlayerButton()
		 {
			 Refresh();
			 nextTurn();
			 DrawWorld();

			 if (riverSize == 5)
			 {
				 fillHands();
				 Player^ winner = getWinner();
				 if (getWinner() == pT->getPlayer())
				 {
					 MessageBox::Show("Player Wins");
				 }
				 else
				 {
					 if (winner == pT->getAI(0))
					 {
						 MessageBox::Show("Computer0 Wins");
					 }
					 else if (winner == pT->getAI(1))
					 {
						 MessageBox::Show("Computer1 Wins");
					 }
					 else
					 {
						 MessageBox::Show("Computer2 Wins");
					 }
				 }

				 getWinner()->changeTotal(pT->getBetPool());

				 betButton->Enabled = false;
				 checkButton->Enabled = false;
				 foldButton->Enabled = false;
				 //restart();
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	restart();
}
};
}


