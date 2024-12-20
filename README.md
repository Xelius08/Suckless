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
2. Clone this repository (preferably in your home directory) `git clone https://github.com/Tahsin404/Suckless.git && cd Suckless`. Do not compile just yet.
3. Follow the instructions and install [polybar-dwm-module](https://github.com/mihirlad55/polybar-dwm-module) from their git repo. You do not need to patch this dwm with IPC and anybar as they are already patched in. For Arch Users you can use the AUR:
   `yay -S polybar-dwm-module`
4. Install [python-pywal](https://github.com/dylanaraps/pywal)
   ```
   #For Arch Users:
   yay -S python-pywal
   wal -i Wallpaper/gargantua-black-3840x2160-9621.jpg
   ```
5. Install [picom-ftlabs](https://github.com/FT-Labs/picom)
   ```
   #For Arch users
   yay -S picom-ftlabs-git
   ```
6. Install [starship](https://starship.rs/)
   ```
   #For Arch users: 
   sudo pacman -S starship
   ```

### Dotfiles
All the necessary Dotfiles are available [here](https://github.com/Tahsin404/dotfiles). If you're using GNU stow to manage your dotfiles then you know what to do, if not then: 

1. Clone the dotfiles repo and copy the contents in .config to your own .config directory
   ```
   git clone https://github.com/Tahsin404/dotfiles.git
   cd dotfiles/.config
   cp * ~/.config
   ```
3. Copy the contents of wal as needed, into your own wal directory. The main files for this build are colors-wal-(dwm/dmenu/st).h
   ```
   cd ..
   cd .cache/wal
   cp * ~/.cache/wal
   ``` 
7. Finally cd into the dwm, st and dmenu folders and `make` and `make clean install`
