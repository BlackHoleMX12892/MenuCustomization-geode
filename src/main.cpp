#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}

		auto disableCloseMenu = Mod::get()->getSettingValue<bool>("disable-close-menu");
		auto disableMainTitle = Mod::get()->getSettingValue<bool>("disable-main-title");
		auto disablePlayerUsername = Mod::get()->getSettingValue<bool>("disable-player-username");
		auto disableProfileMenu = Mod::get()->getSettingValue<bool>("disable-profile-menu");
		auto disableMainMenu = Mod::get()->getSettingValue<bool>("disable-main-menu");
		auto disableRightSideMenu = Mod::get()->getSettingValue<bool>("disable-right-side-menu");
		auto disableSocialMediaMenu = Mod::get()->getSettingValue<bool>("disable-social-media-menu");
		auto disableMoreGamesMenu = Mod::get()->getSettingValue<bool>("disable-more-games-menu");

		if (disableCloseMenu == true)
		{
			auto closeMenu = this->getChildByID("close-menu");

			closeMenu->setVisible(false);
		}
		

		if (disableMainTitle == true)
		{
			auto mainTitle = this->getChildByID("main-title");

			mainTitle->setVisible(false);
		}
		

		if (disablePlayerUsername == true)
		{
			auto playerUsername = this->getChildByID("player-username");

			playerUsername->setVisible(false);
		}
		

		if (disableProfileMenu == true)
		{
			auto profileMenu = this->getChildByID("profile-menu");

			profileMenu->setVisible(false);
		}
		

		if (disableMainMenu == true)
		{
			auto mainMenu = this->getChildByID("main-menu");

			mainMenu->setVisible(false);
		}
		

		if (disableRightSideMenu == true)
		{
			auto rightSideMenu = this->getChildByID("right-side-menu");

			rightSideMenu->setVisible(false);
		}
		

		if (disableSocialMediaMenu == true) 
		{
			auto socialMediaMenu = this->getChildByID("social-media-menu");

		    socialMediaMenu->setVisible(false);
		}
		

		if (disableMoreGamesMenu == true)
		{
			auto moreGamesMenu = this->getChildByID("more-games-menu");

		    moreGamesMenu->setVisible(false);
		}

		this->updateLayout();

		return true;
	}
};