#include <iostream>
#include <string>
using namespace std;

// === COLOR PALETTE — YOUR CHOICES 🎨 ===
string pickColor(string item) {
    int c;
    cout << "\n🎨 Choose color for " << item << ":\n";
    cout << "  1. 🩷 Light Pink\n";
    cout << "  2. 💜 Light Purple\n";
    cout << "  3. 🤍 White\n";
    cout << "  4. 💙 Light Blue\n";
    cout << "  5. 🌼 Soft Yellow\n";
    cout << "  Your choice: ";
    cin >> c;
    
    switch(c) {
        case 1: return "🩷 Light Pink";
        case 2: return "💜 Light Purple";
        case 3: return "🤍 White";
        case 4: return "💙 Light Blue";
        case 5: return "🌼 Soft Yellow";
        default: return "🩷 Light Pink";
    }
}

// === AVATAR PARTS — SIMPLE & CUTE ===
string chooseSkinTone() {
    int c;
    cout << "\n💜 Skin Tone 💜\n";
    cout << "  1. 🌸 Fair   2. ✨ Light   3. 🌻 Warm\n";
    cout << "  4. 🌙 Tan    5. 🌍 Deep\n";
    cout << "  Your choice: ";
    cin >> c;
    switch(c) {
        case 1: return "🌸 Fair Skin";
        case 2: return "✨ Light Skin";
        case 3: return "🌻 Warm Skin";
        case 4: return "🌙 Tan Skin";
        case 5: return "🌍 Deep Skin";
        default: return "✨ Light Skin";
    }
}

string chooseStyle(string item) {
    int c;
    cout << "\n🌸 Choose " << item << " style 🌸\n";
    cout << "  1. Simple Cute\n  2. Elegant\n  3. Sparkly\n";
    cout << "  Your choice: ";
    cin >> c;
    if (c == 2) return "Elegant ";
    if (c == 3) return "Sparkly ";
    return "Cute ";
}

// === DISPLAY — PINK & PURPLE BACKGROUND THEME ===
void showAvatar(string name, string skin, string hairStyle, string hairColor,
                string dressStyle, string dressColor, string accStyle, string accColor) {
    cout << "\n\n";
    cout << " ╭━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╮\n";
    cout << " │   🩷💜 YOUR AVATAR 💜🩷   │\n";
    cout << " │  Background: Pink + Purple │\n";
    cout << " ╰━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╯\n";
    cout << "  🩷 Name: " << name << "\n";
    cout << "  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
    cout << "  💜 Hair:     " << hairColor << " | " << hairStyle << "\n";
    cout << "  🩷 Skin:     " << skin << "\n";
    cout << "  💜 Outfit:   " << dressColor << " | " << dressStyle << "\n";
    cout << "  🩷 Accessory: " << accColor << " | " << accStyle << "\n";
    cout << "  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
    cout << "      🩷💜 SO BEAUTIFUL 💜🩷\n";
    cout << " ╭━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╮\n";
    cout << " │   Made with 💖 just for you   │\n";
    cout << " ╰━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╯\n";
}

// === MAIN PROGRAM ===
int main() {
    cout << "\n";
    cout << " ╭━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╮\n";
    cout << " │   🩷💜 AVATAR CREATOR 💜🩷   │\n";
    cout << " │  Background: Pink + Purple  │\n";
    cout << " ╰━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╯\n";
    cout << "\n Design your look — pick your own colors! 🎨\n\n";
    
    string name;
    cout << " 🩷 Avatar name: ";
    getline(cin, name);
    
    string skin = chooseSkinTone();
    
    cout << "\n── HAIR ──";
    string hairStyle = chooseStyle("Hair");
    string hairColor = pickColor("Hair");
    
    cout << "\n── OUTFIT ──";
    string dressStyle = chooseStyle("Outfit");
    string dressColor = pickColor("Outfit");
    
    cout << "\n── ACCESSORY ──";
    string accStyle = chooseStyle("Accessory");
    string accColor = pickColor("Accessory");
    
    showAvatar(name, skin, hairStyle, hairColor, dressStyle, dressColor, accStyle, accColor);
    
    cout << "\n 💜🌸 Come play again soon! 🌸💜\n\n";
    return 0;
}
