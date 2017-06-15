
let make children => {
  ...(ReasonReact.statelessComponent "Child"),
  render: fun _ _ =>
    <div> children </div>
}