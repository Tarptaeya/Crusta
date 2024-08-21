const { app, BrowserWindow } = require("electron");

const createWindow = () => {
  const window = new BrowserWindow({
    width: 1080,
    height: 720,
    title: "Crusta",
    webPreferences: {
      webviewTag: true,
    },
  });

  window.loadFile("index.html");
};

app.whenReady().then(() => {
  createWindow();
});

app.on("window-all-closed", () => {
  app.quit();
});
