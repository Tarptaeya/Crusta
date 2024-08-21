import React from "react";
import { createRoot } from "react-dom/client";

const root = createRoot(document.getElementById("root"));
root.render(
  <webview
    src="http://example.com"
    autosize="on"
    style={{ display: "flex", width: "100%", height: "100%" }}
  />,
);
