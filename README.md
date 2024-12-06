# Demo
![SS5](https://github.com/user-attachments/assets/69f3ddaa-9e06-4c0a-9614-3f6960fa80af)
![SS10](https://github.com/user-attachments/assets/108c7428-24e1-4bb2-8356-36d4b0b428c8)
![SS7](https://github.com/user-attachments/assets/5d9c7692-9690-4aa0-8a5b-e559c986191d)
![SS9](https://github.com/user-attachments/assets/fbd930b3-01b6-4240-89d9-2a27105067d4)

https://github.com/user-attachments/assets/c07f27e2-9173-4dd9-99bb-a6f63b1f210f


# Requirements
1. This Suckless repo
2. Nerd Fonts
3. jsoncpp, yajl, dwmipcpp libraries.
4. [polybar-dwm-module](https://github.com/mihirlad55/polybar-dwm-module)
5. [picom-ftlabs](https://github.com/FT-Labs/picom)
6. [Ranger CLI](https://github.com/ranger/ranger) (File Manager)
7. [Zen](https://zen-browser.app/) (Web Browser)
8. [Spicetify](https://spicetify.app/) (Spotify customization)
9. [Python-pywal](https://github.com/dylanaraps/pywal)
10. Git

# Installation
1. Install your preferred Nerd Fonts. I used Lekton, Ubuntu, Hack and Monofur.
2. Clone this repository (preferably in your home directory) `git clone https://github.com/Tahsin404/Suckless.git`. Do not compile just yet.
3. Follow the instructions and install [polybar-dwm-module](https://github.com/mihirlad55/polybar-dwm-module) from their git repo. You do not need to patch this dwm with IPC and anybar as they are already patched in. For Arch Users you can use the AUR:
   `yay -S polybar-dwm-module`
5. Make a directory in .config named polybar then cd into Suckless and copy config.ini and bar.sh into it.
   ```
   mkdir $HOME/.config/polybar
   cd Suckless
   cp config.ini $HOME/.config/polybar
   cp bar.sh $HOME/.config/polybar
   ```
6. Install [python-pywal](https://github.com/dylanaraps/pywal) and set the theme that complements your chosen wallpaper. If you want the exact look as the demo, copy all the *.h files in .cache/wal
   ```
   #For Arch Users:
   yay -S python-pywal
   wal -i $HOME/Suckeless/Wallpaper/gargantua-black-3840x2160-9621.jpg
   
   # For Demo Look
   cp *.h $HOME/.cache/wal
   ```
>[!Note]
  When applying colorscheme to dwm with wal, I got an error, this is because I don't have SchemeUrgent patch. If you decide to patch it in then you will have no problems otherwise you will have to manually add the lines from colors-wal-dwm.h

7. Install [picom-ftlabs](https://github.com/FT-Labs/picom) for the exact animation shown in Demo. Make a folder in .config named *picom* and paste picom.conf there.
   ```
   #For Arch users
   yay -S picom-ftlabs-git
   mkdir $HOME/.config/picom
   cp picom.conf $HOME/.config/picom
   ```
8. Install [starship](https://starship.rs/) and copy the .toml file into .config `cp starship.toml ~/.config`   
9. cd into the dwm, st and dmenu folders and `make` and `make clean install`
10. You can also copy the ranger config files from the Suckless folder into your own ranger config folder if you want this look. And some shortcuts.
